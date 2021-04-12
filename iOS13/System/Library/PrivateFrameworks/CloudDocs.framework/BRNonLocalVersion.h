/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@class NSURL, NSString, NSDate, NSPersonNameComponents, GSPermanentStorage;

@interface BRNonLocalVersion : NSObject {

	NSURL* _url;
	NSString* _displayName;
	NSString* _etag;
	unsigned long long _size;
	NSDate* _modificationDate;
	NSString* _lastEditorDeviceName;
	NSPersonNameComponents* _lastEditorNameComponents;
	BOOL _hasThumbnail;
	GSPermanentStorage* _versionsStore;
	long long _sandboxHandle;
	NSURL* _physicalURL;

}

@property (assign,nonatomic) BOOL hasThumbnail;                                                 //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * etag;                                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) id<NSCopying><NSSecureCoding> persistentIdentifier; 
@property (nonatomic,readonly) NSString * displayName;                                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                       //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) NSString * lastEditorDeviceName;                                 //@synthesize lastEditorDeviceName=_lastEditorDeviceName - In the implementation block
@property (nonatomic,readonly) NSString * lastEditorFormattedName; 
@property (nonatomic,readonly) NSPersonNameComponents * lastEditorNameComponents;               //@synthesize lastEditorNameComponents=_lastEditorNameComponents - In the implementation block
@property (nonatomic,readonly) BOOL isLatestVersion; 
+(id)listVersionsOfDocumentAtURL:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)size;
-(NSURL *)url;
-(id<NSCopying><NSSecureCoding>)persistentIdentifier;
-(NSString *)lastEditorDeviceName;
-(NSString *)lastEditorFormattedName;
-(NSPersonNameComponents *)lastEditorNameComponents;
-(BOOL)hasThumbnail;
-(NSString *)etag;
-(NSDate *)modificationDate;
-(NSString *)displayName;
-(BOOL)isLatestVersion;
-(id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(BOOL)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorNameComponents:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
@end

