/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@class NSString, NSArray, NSNumber;

@interface _RWIAutomaticInspectionSession : NSObject {

	NSString* _identifier;
	NSArray* _debuggers;
	NSNumber* _pageId;
	NSString* _applicationIdentifier;
	unsigned long long _currentDebuggerIndex;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * debuggers;                //@synthesize debuggers=_debuggers - In the implementation block
-(NSString *)identifier;
-(void)start;
-(void)_sendQuery;
-(id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3 ;
-(BOOL)receivedRejectResponse;
-(BOOL)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2 ;
-(NSArray *)debuggers;
@end

