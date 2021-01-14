/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/WFRemoteFile.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDate, NSDictionary;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing, NSSecureCoding> {

	NSString* _name;
	NSString* _path;
	NSString* _identifier;
	NSString* _revision;
	NSString* _contentHash;
	NSNumber* _fileSize;
	NSDate* _clientModifiedDate;
	NSDate* _serverModifiedDate;
	NSString* _itemKind;

}

@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * itemKind;                                //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * revision;                         //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentHash;                      //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,readonly) NSNumber * fileSize;                              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) NSDate * clientModifiedDate;                      //@synthesize clientModifiedDate=_clientModifiedDate - In the implementation block
@property (nonatomic,readonly) NSDate * serverModifiedDate;                      //@synthesize serverModifiedDate=_serverModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)clientModifiedDateJSONTransformer;
+(id)serverModifiedDateJSONTransformer;
-(NSString *)contentHash;
-(NSString *)itemKind;
-(NSNumber *)fileSize;
-(NSString *)path;
-(NSString *)name;
-(NSString *)wfName;
-(id)wfPath;
-(unsigned long long)hash;
-(BOOL)isDirectory;
-(NSString *)identifier;
-(void)setItemKind:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)revision;
-(id)wfFileType;
-(BOOL)wfIsDirectory;
-(id)wfFileSize;
-(id)wfLastModifiedDate;
-(BOOL)wfIsEqualToFile:(id)arg1 ;
-(NSDate *)clientModifiedDate;
-(NSDate *)serverModifiedDate;
@end

