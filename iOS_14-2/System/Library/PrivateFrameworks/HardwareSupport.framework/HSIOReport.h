/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface HSIOReport : NSObject <NSCopying> {

	NSDictionary* _reportDictionary;
	NSArray* _channelDescriptions;

}

@property (nonatomic,retain) NSDictionary * reportDictionary;              //@synthesize reportDictionary=_reportDictionary - In the implementation block
@property (nonatomic,retain) NSArray * channelDescriptions;                //@synthesize channelDescriptions=_channelDescriptions - In the implementation block
+(id)report:(id*)arg1 ;
+(id)reportWithOnlySimpleChannels:(id*)arg1 ;
-(id)description;
-(id)snapshot:(id*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithReportDictionary:(id)arg1 ;
-(NSDictionary *)reportDictionary;
-(NSArray *)channelDescriptions;
-(BOOL)isEqualToReport:(id)arg1 ;
-(id)reportByFilteringChannels:(/*^block*/id)arg1 ;
-(void)setReportDictionary:(NSDictionary *)arg1 ;
-(void)setChannelDescriptions:(NSArray *)arg1 ;
-(id)reportWithOnlySimpleChannels;
@end

