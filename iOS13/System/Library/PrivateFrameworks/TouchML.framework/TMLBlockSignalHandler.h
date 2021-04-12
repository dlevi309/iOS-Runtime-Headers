/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLSignalHandler.h>

@class NSString;

@interface TMLBlockSignalHandler : NSObject <TMLSignalHandler> {

	/*^block*/id _block;
	int _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)detach;
-(void)attach;
-(id)callWithArguments:(id)arg1 ;
@end

