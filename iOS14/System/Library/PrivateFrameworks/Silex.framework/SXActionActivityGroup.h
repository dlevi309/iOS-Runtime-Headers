/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityGroup.h>
@class NSString, NSArray;


@protocol SXActionActivityGroup <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * activities; 
@required
-(NSArray *)activities;
-(NSString *)title;

@end


@class NSString, NSArray, NSMutableArray;

@interface SXActionActivityGroup : NSObject <SXActionActivityGroup> {

	NSString* _title;
	NSMutableArray* _activities;

}

@property (nonatomic,retain) NSMutableArray * activities;              //@synthesize activities=_activities - In the implementation block
@property (nonatomic,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)activities;
-(id)initWithTitle:(id)arg1 ;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(void)addActivity:(id)arg1 ;
-(NSString *)title;
@end

