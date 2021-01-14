/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/

@class AXElementGroup;


@protocol AXGroupable <NSObject>
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup; 
@required
-(BOOL)isGroup;
-(void)setParentGroup:(id)arg1;
-(CGRect)frame;
-(AXElementGroup *)parentGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;

@end

