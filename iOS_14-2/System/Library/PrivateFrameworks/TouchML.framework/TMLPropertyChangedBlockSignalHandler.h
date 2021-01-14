/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TMLBlockSignalHandler.h>
#import <libobjc.A.dylib/TMLBinder.h>

@class TMLBinding, NSString;

@interface TMLPropertyChangedBlockSignalHandler : TMLBlockSignalHandler <TMLBinder> {

	TMLBinding* _binding;

}

@property (nonatomic,readonly) long long bindingOrder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detach;
-(void)attach;
-(void)bindingValueChanged:(id)arg1 ;
-(long long)bindingOrder;
-(id)initWithBlock:(/*^block*/id)arg1 binding:(id)arg2 ;
@end

