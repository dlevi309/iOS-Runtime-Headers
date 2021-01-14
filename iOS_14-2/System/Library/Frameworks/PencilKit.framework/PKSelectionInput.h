/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@interface PKSelectionInput : NSObject {

	long long _selectionType;
	long long _inputType;
	CGPoint _location;

}

@property (assign,nonatomic) long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (assign,nonatomic) CGPoint location;                     //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long inputType;                  //@synthesize inputType=_inputType - In the implementation block
+(id)inputWithType:(long long)arg1 location:(CGPoint)arg2 inputType:(long long)arg3 ;
-(CGPoint)location;
-(long long)inputType;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setSelectionType:(long long)arg1 ;
-(long long)selectionType;
-(void)setInputType:(long long)arg1 ;
@end

