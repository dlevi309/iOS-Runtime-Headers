/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(NSString *)identifier;
-(void)_sendQuery;
-(id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3 ;
-(BOOL)receivedRejectResponse;
-(BOOL)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2 ;
-(NSArray *)debuggers;
@end

