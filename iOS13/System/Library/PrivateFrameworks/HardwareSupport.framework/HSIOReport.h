/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)snapshot:(id*)arg1 ;
-(id)initWithReportDictionary:(id)arg1 ;
-(NSDictionary *)reportDictionary;
-(NSArray *)channelDescriptions;
-(BOOL)isEqualToReport:(id)arg1 ;
-(id)reportByFilteringChannels:(/*^block*/id)arg1 ;
-(void)setReportDictionary:(NSDictionary *)arg1 ;
-(void)setChannelDescriptions:(NSArray *)arg1 ;
-(id)reportWithOnlySimpleChannels;
@end

