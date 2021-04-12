/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageMoveRequestConsumer.h>

@class NSSet, NSMutableDictionary, NSMutableSet, MFError;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {

	NSSet* _sourceRemoteIDs;
	NSMutableDictionary* _destinationRemoteIDsBySourceRemoteIDs;
	NSMutableSet* _failures;
	MFError* _error;
	long long _statusCode;

}

@property (nonatomic,retain) MFError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
-(MFError *)error;
-(long long)statusCode;
-(void)setError:(MFError *)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(void)resultsForMessageMove:(id)arg1 ;
-(id)initWithSourceRemoteIDs:(id)arg1 destinationRemoteIDsBySourceRemoteIDs:(id)arg2 failures:(id)arg3 ;
@end

