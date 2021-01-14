/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCJCOPRestrictedModeEvent, NSString;

@interface NFAWDJCOPRestrictedMode : NSObject <NFAWDEventProtocol> {

	AWDNFCJCOPRestrictedModeEvent* _metric;

}

@property (assign,nonatomic) BOOL contactlessMode; 
@property (nonatomic,retain) AWDNFCJCOPRestrictedModeEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(AWDNFCJCOPRestrictedModeEvent *)metric;
-(id)getMetric;
-(unsigned)getMetricId;
-(void)setMetric:(AWDNFCJCOPRestrictedModeEvent *)arg1 ;
-(void)updateExceptionUUID:(id)arg1 ;
-(BOOL)contactlessMode;
-(void)setContactlessMode:(BOOL)arg1 ;
@end

