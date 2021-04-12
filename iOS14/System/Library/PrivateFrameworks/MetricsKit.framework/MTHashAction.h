/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTTreatmentAction.h>

@class MTIDScheme;

@interface MTHashAction : MTTreatmentAction {

	MTIDScheme* _scheme;

}

@property (nonatomic,retain) MTIDScheme * scheme;              //@synthesize scheme=_scheme - In the implementation block
-(void)setScheme:(MTIDScheme *)arg1 ;
-(MTIDScheme *)scheme;
-(id)initWithField:(id)arg1 configDictionary:(id)arg2 ;
-(id)performAction:(id)arg1 context:(id)arg2 ;
-(id)hashOf:(id)arg1 userId:(id)arg2 ;
@end

