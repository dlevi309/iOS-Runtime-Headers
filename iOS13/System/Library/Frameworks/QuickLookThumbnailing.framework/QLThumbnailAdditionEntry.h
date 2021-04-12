/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <libobjc.A.dylib/PQLResultSetInitializer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSURL, NSData, NSString;

@interface QLThumbnailAdditionEntry : NSObject <PQLResultSetInitializer, NSSecureCoding> {

	unsigned long long _documentID;
	long long _size;
	NSDate* _lastHitDate;
	NSURL* _lastSeenURL;
	NSData* _vol_uuid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long documentID;                   //@synthesize documentID=_documentID - In the implementation block
@property (assign) long long size;                                  //@synthesize size=_size - In the implementation block
@property (retain) NSDate * lastHitDate;                            //@synthesize lastHitDate=_lastHitDate - In the implementation block
@property (retain) NSURL * lastSeenURL;                             //@synthesize lastSeenURL=_lastSeenURL - In the implementation block
@property (retain) NSData * vol_uuid;                               //@synthesize vol_uuid=_vol_uuid - In the implementation block
@property (readonly) NSString * unparsedVolumeUUID; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(unsigned long long)documentID;
-(void)setDocumentID:(unsigned long long)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(NSDate *)lastHitDate;
-(NSURL *)lastSeenURL;
-(NSData *)vol_uuid;
-(void)setLastHitDate:(NSDate *)arg1 ;
-(void)setLastSeenURL:(NSURL *)arg1 ;
-(void)setVol_uuid:(NSData *)arg1 ;
-(NSString *)unparsedVolumeUUID;
@end

