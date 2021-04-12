/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDAnnotationHosting.h>

@protocol TSKModel;
@class TSKAnnotationAuthor, NSDate, NSString, TSDCommentStorage, TSWPChange;

@interface TSWPChangeDetails : NSObject <TSDAnnotationHosting> {

	NSString* mChangeString;
	id<TSKModel> model;
	TSWPChange* _change;

}

@property (nonatomic,retain) TSWPChange * change;                            //@synthesize change=_change - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,readonly) int annotationDisplayStringType; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id<TSKModel>)model;
-(void)setModel:(id<TSKModel>)arg1 ;
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(int)annotationType;
-(TSWPChange *)change;
-(void)setChange:(TSWPChange *)arg1 ;
-(int)annotationDisplayStringType;
-(BOOL)isEqualToChangeDetails:(id)arg1 ;
-(NSString *)changeTrackingString;
-(id)initWithChange:(id)arg1 changeString:(id)arg2 ;
-(void)commitText:(id)arg1 ;
@end

