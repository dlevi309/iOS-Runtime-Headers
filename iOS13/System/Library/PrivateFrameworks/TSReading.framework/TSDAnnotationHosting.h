/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class TSKAnnotationAuthor, NSDate, NSString, TSDCommentStorage;


@protocol TSDAnnotationHosting <NSObject,TSKAnnotation>
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,readonly) NSDate * date; 
@property (assign,nonatomic) id<TSKModel> model; 
@property (nonatomic,readonly) NSString * changeTrackingString; 
@property (nonatomic,copy) TSDCommentStorage * storage; 
@optional
-(TSDCommentStorage *)storage;
-(void)setStorage:(id)arg1;
-(NSString *)changeTrackingString;
-(id)commandForDeletingComment;

@required
-(BOOL)isEqual:(id)arg1;
-(NSDate *)date;
-(id<TSKModel>)model;
-(void)setModel:(id)arg1;
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(id)arg1;
-(void)commitText:(id)arg1;

@end

