/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSDate, NSString, CLSActivityItem, NSArray;

@interface CLSActivity : CLSObject <CLSRelationable> {

	BOOL _paused;
	NSDate* _activityStartDate;
	NSString* _primaryActivityItemIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * primaryActivityItemIdentifier; 
@property (assign,nonatomic) double progress; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain) CLSActivityItem * primaryActivityItem; 
@property (nonatomic,readonly) NSArray * additionalActivityItems; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)pause;
-(void)resume;
-(BOOL)isStarted;
-(void)stop;
-(void)start;
-(id)dictionaryRepresentation;
-(double)progress;
-(double)duration;
-(void)setProgress:(double)arg1 ;
-(long long)effectiveAuthorizationStatus;
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
@end

