/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)detach;
-(id)callWithArguments:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)attach;
@end

