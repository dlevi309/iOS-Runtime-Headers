/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityGroup.h>
@class NSString, NSArray;


@protocol SXActionActivityGroup <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * activities; 
@required
-(NSString *)title;
-(NSArray *)activities;

@end


@class NSString, NSArray, NSMutableArray;

@interface SXActionActivityGroup : NSObject <SXActionActivityGroup> {

	NSString* _title;
	NSMutableArray* _activities;

}

@property (nonatomic,retain) NSMutableArray * activities;              //@synthesize activities=_activities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(NSMutableArray *)activities;
-(id)initWithTitle:(id)arg1 ;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(void)addActivity:(id)arg1 ;
@end

