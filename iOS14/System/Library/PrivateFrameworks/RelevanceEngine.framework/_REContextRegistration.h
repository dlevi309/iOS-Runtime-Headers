/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol _CDUserContext;
@class NSArray, REDuetContextQuery, NSUUID;

@interface _REContextRegistration : NSObject {

	BOOL _registered;
	NSArray* _registrations;
	REDuetContextQuery* _query;
	id<_CDUserContext> _context;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) REDuetContextQuery * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id callback;                                 //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(REDuetContextQuery *)query;
-(void)setCallback:(id)arg1 ;
-(NSUUID *)uuid;
-(id<_CDUserContext>)context;
-(id)initWithQuery:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(void)registerWithContext;
-(void)evaluateQuery;
-(void)deregisterWithContext;
-(void)_evaluateQueryWithRegistration:(BOOL)arg1 ;
@end

