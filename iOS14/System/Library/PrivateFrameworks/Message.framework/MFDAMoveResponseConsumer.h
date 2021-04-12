/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(MFError *)arg1 ;
-(MFError *)error;
-(long long)statusCode;
-(void)resultsForMessageMove:(id)arg1 ;
-(id)initWithSourceRemoteIDs:(id)arg1 destinationRemoteIDsBySourceRemoteIDs:(id)arg2 failures:(id)arg3 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
@end

