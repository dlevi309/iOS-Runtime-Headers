/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <libobjc.A.dylib/NUIGridDimension.h>
@class NSArray;


@protocol NUIGridDimension <NSObject>
@property (nonatomic,copy) NSArray * arrangedSubviews; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) long long alignment; 
@required
-(void)setLength:(double)arg1;
-(NSArray *)arrangedSubviews;
-(BOOL)isHidden;
-(long long)alignment;
-(void)setHidden:(BOOL)arg1;
-(double)length;
-(void)setArrangedSubviews:(id)arg1;
-(void)setAlignment:(long long)arg1;
-(double)spacingAfter;
-(void)setSpacingAfter:(double)arg1;

@end


@class NSArray, NUIContainerGridView, NSString;

@interface NUIGridDimension : NSObject <NUIGridDimension> {

	NUIContainerGridView* _gridView;
	NSArray* _arrangedSubviews;
	double _length;
	double _spacing;
	struct {
		unsigned align : 8;
		unsigned isRow : 1;
		unsigned hidden : 1;
		unsigned wasDetached : 1;
	}  _flags;

}

@property (nonatomic,copy) NSArray * arrangedSubviews; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) double length; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLength:(double)arg1 ;
-(NSArray *)arrangedSubviews;
-(BOOL)isHidden;
-(long long)alignment;
-(void)setHidden:(BOOL)arg1 ;
-(double)length;
-(void)setAlignment:(long long)arg1 ;
-(double)spacingAfter;
-(void)setSpacingAfter:(double)arg1 ;
-(void)dealloc;
@end

