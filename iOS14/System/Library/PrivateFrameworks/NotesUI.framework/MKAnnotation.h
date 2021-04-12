/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)subtitle;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;
-(NSString *)title;

@required
-(CLLocationCoordinate2D)coordinate;

@end

