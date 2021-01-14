/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/TLTimelineEntry.h>

@class NSDate, NSData, NSString;

@interface TLTimelineBlobEntry : NSObject <TLTimelineEntry> {

	NSDate* _tl_entryDate;
	NSData* _blob;

}

@property (nonatomic,readonly) NSData * blob;                                            //@synthesize blob=_blob - In the implementation block
@property (setter=tl_setEntryDate:,nonatomic,retain) NSDate * tl_entryDate;              //@synthesize tl_entryDate=_tl_entryDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)blob;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)tl_validate:(id*)arg1 ;
-(NSDate *)tl_entryDate;
-(void)tl_setEntryDate:(id)arg1 ;
-(id)initWithBlob:(id)arg1 atDate:(id)arg2 ;
@end

