/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate, NSDictionary;

@interface WBSCloudTabDevice : NSObject <NSCopying> {

	BOOL _closeRequestSupported;
	BOOL _hasDuplicateName;
	BOOL _ephemeralDevice;
	BOOL _cloudKitBookmarkSyncingSupported;
	NSString* _name;
	NSString* _uuid;
	NSArray* _tabs;
	NSDate* _lastModified;

}

@property (nonatomic,copy,readonly) NSString * name;                                                                         //@synthesize name=_name - In the implementation block
@property (getter=isCloseRequestSupported,nonatomic,readonly) BOOL closeRequestSupported;                                    //@synthesize closeRequestSupported=_closeRequestSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasDuplicateName;                                                                        //@synthesize hasDuplicateName=_hasDuplicateName - In the implementation block
@property (getter=isEphemeralDevice,nonatomic,readonly) BOOL ephemeralDevice;                                                //@synthesize ephemeralDevice=_ephemeralDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tabs;                                                                          //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,readonly) NSDate * lastModified;                                                                        //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isCloudKitBookmarkSyncingSupported,nonatomic,readonly) BOOL cloudKitBookmarkSyncingSupported;              //@synthesize cloudKitBookmarkSyncingSupported=_cloudKitBookmarkSyncingSupported - In the implementation block
+(id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 isEphemeralDevice:(BOOL)arg5 ;
+(BOOL)isCloudTabDeviceDictionary:(id)arg1 ;
+(unsigned long long)tabCountInDictionary:(id)arg1 ;
+(id)deviceNameInDictionary:(id)arg1 ;
+(id)lastModifiedDateInDictionary:(id)arg1 ;
+(BOOL)hasDuplicateDeviceNameInDictionary:(id)arg1 ;
+(BOOL)isEphemeralDeviceInDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uuid;
-(NSDate *)lastModified;
-(NSArray *)tabs;
-(BOOL)isCloudKitBookmarkSyncingSupported;
-(id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(BOOL)arg6 ;
-(id)initWithDictionary:(id)arg1 uuid:(id)arg2 ;
-(id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(BOOL)arg3 tabs:(id)arg4 uuid:(id)arg5 ;
-(id)deviceByRemovingTab:(id)arg1 ;
-(id)deviceByRemovingTabs:(id)arg1 ;
-(BOOL)isCloseRequestSupported;
-(BOOL)hasDuplicateName;
-(BOOL)isEphemeralDevice;
@end

