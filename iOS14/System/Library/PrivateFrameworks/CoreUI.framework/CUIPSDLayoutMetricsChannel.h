/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject {

	CGRect _edgeInsets;
	NSString* _name;

}

@property (nonatomic,readonly) CGRect edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(void)setEdgeInsets:(CGRect)arg1 ;
-(CGRect)edgeInsets;
-(NSString *)name;
-(id)initWithEdgeInsets:(CGRect)arg1 ;
-(void)sanitizeEdgeInsets;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

