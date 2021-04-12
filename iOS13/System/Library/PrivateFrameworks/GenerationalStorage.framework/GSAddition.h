/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/


@protocol GSAdditionStoringGSAdditionStoringPrivate;
#import <GenerationalStorage/GenerationalStorage-Structs.h>
@class NSObject, NSNumber, NSString, NSURL, NSDictionary, NSPersonNameComponents, NSData;

@interface GSAddition : NSObject {

	NSObject*<GSAdditionStoring>*<GSAdditionStoringPrivate> _storage;
	unsigned long long _options;
	NSNumber* _size;
	NSString* _namespace;
	NSURL* _url;
	NSString* _originalName;
	NSString* _displayName;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) NSString * br_lastEditorDeviceName; 
@property (nonatomic,readonly) NSString * br_lastEditorName; 
@property (nonatomic,readonly) NSPersonNameComponents * br_lastEditorNameComponents; 
@property (nonatomic,readonly) NSData * sandboxExtension; 
@property (nonatomic,readonly) BOOL isSavedConflict; 
@property (nonatomic,readonly) unsigned long long options;                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<GSAdditionStoring> storage;                              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSString * nameSpace;                                              //@synthesize namespace=_namespace - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSString * originalPOSIXName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
+(id)makeNameForUser:(unsigned)arg1 name:(id)arg2 ;
-(NSString *)br_lastEditorDeviceName;
-(NSPersonNameComponents *)br_lastEditorNameComponents;
-(BOOL)br_markResolvedWithError:(id*)arg1 ;
-(BOOL)_br_markResolvedWithError:(id*)arg1 ;
-(NSString *)br_lastEditorName;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(unsigned long long)options;
-(NSDictionary *)userInfo;
-(NSObject*<GSAdditionStoring>)storage;
-(NSNumber *)size;
-(NSURL *)url;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(NSString *)originalPOSIXName;
-(NSString *)nameSpace;
-(BOOL)isSavedConflict;
-(id)replaceItemAtURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)displayName;
-(BOOL)mergeUserInfo:(id)arg1 error:(id*)arg2 ;
-(NSData *)sandboxExtension;
-(id)displayNameWithError:(id*)arg1 ;
-(id)originalPOSIXNameWithError:(id*)arg1 ;
-(id)userInfoWithError:(id*)arg1 ;
-(void)_refreshWithDictionary:(id)arg1 ;
-(BOOL)refreshWithError:(id*)arg1 ;
-(id)_initWithStorage:(id)arg1 andDictionary:(id)arg2 ;
-(BOOL)setOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setDisplayName:(id)arg1 error:(id*)arg2 ;
-(BOOL)setNameSpace:(id)arg1 error:(id*)arg2 ;
-(BOOL)internalStat:(stat*)arg1 ;
-(BOOL)copyAdditionContentToURL:(id)arg1 error:(id*)arg2 ;
@end

