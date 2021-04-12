/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <KeyboardServices/KeyboardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSData;

@interface _KSTextReplacementEntry : NSObject <NSSecureCoding, NSCopying> {

	BOOL _needsSaveToCloud;
	BOOL _wasDeleted;
	NSString* _phrase;
	NSString* _shortcut;
	NSDate* _timestamp;
	_KSTextReplacementEntry* _priorValue;
	NSData* _cloudData;
	NSString* _cloudID;

}

@property (nonatomic,retain) NSData * cloudData;                                //@synthesize cloudData=_cloudData - In the implementation block
@property (assign) BOOL needsSaveToCloud;                                       //@synthesize needsSaveToCloud=_needsSaveToCloud - In the implementation block
@property (assign) BOOL wasDeleted;                                             //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (nonatomic,copy) NSString * cloudID;                                  //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * phrase;                                   //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,copy) NSString * shortcut;                                 //@synthesize shortcut=_shortcut - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) _KSTextReplacementEntry * priorValue;              //@synthesize priorValue=_priorValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localEntryFromCloudEntry:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)uniqueID;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)cloudID;
-(void)setCloudID:(NSString *)arg1 ;
-(NSString *)shortcut;
-(void)setShortcut:(NSString *)arg1 ;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(id)encryptedFields;
-(void)setNeedsSaveToCloud:(BOOL)arg1 ;
-(NSData *)cloudData;
-(id)unEncryptedFields;
-(void)setPriorValue:(_KSTextReplacementEntry *)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(BOOL)needsSaveToCloud;
-(BOOL)wasDeleted;
-(void)setCloudData:(NSData *)arg1 ;
-(id)uniqueRecordNameVer0;
-(id)uniqueRecordName;
-(_KSTextReplacementEntry *)priorValue;
@end

