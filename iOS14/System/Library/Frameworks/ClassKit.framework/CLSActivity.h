/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSDate, NSString, CLSActivityItem, NSArray;

@interface CLSActivity : CLSObject <CLSRelationable> {

	BOOL _paused;
	NSDate* _activityStartDate;
	NSString* _primaryActivityItemIdentifier;
	BOOL _backgroundTimeTrackingEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isBackgroudTimeTrackingEnabled,nonatomic) BOOL backgroundTimeTrackingEnabled;              //@synthesize backgroundTimeTrackingEnabled=_backgroundTimeTrackingEnabled - In the implementation block
@property (nonatomic,copy) NSString * primaryActivityItemIdentifier; 
@property (assign,nonatomic) double progress; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain) CLSActivityItem * primaryActivityItem; 
@property (nonatomic,readonly) NSArray * additionalActivityItems; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(double)progress;
-(BOOL)isStarted;
-(void)start;
-(void)pause;
-(void)encodeWithCoder:(id)arg1 ;
-(void)stop;
-(NSString *)description;
-(void)setProgress:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(double)duration;
-(void)resume;
-(long long)effectiveAuthorizationStatus;
-(BOOL)isBackgroudTimeTrackingEnabled;
-(void)addProgressRangeFromStart:(double)arg1 toEnd:(double)arg2 ;
-(double)runningDelta;
-(void)_generateTimeInterval;
-(NSString *)primaryActivityItemIdentifier;
-(id)activityItemWithIdentifier:(id)arg1 ;
-(BOOL)validatePrimaryActivityItemType:(id)arg1 ;
-(CLSActivityItem *)primaryActivityItem;
-(void)setPrimaryActivityItemIdentifier:(NSString *)arg1 ;
-(BOOL)_isObjectActivityItem:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)_isObjectPrimaryItem:(id)arg1 ;
-(void)setPrimaryActivityItem:(CLSActivityItem *)arg1 ;
-(void)addAdditionalActivityItem:(id)arg1 ;
-(NSArray *)additionalActivityItems;
-(void)setBackgroundTimeTrackingEnabled:(BOOL)arg1 ;
@end

