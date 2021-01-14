/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class TMLMetaContext, JSContext, JSValue, NSString, TMLMetaObject;

@interface TMLCloneContext : NSObject {

	TMLMetaContext* _metaContext;
	JSContext* _jsContext;
	JSValue* _apiObject;
	NSString* _apiObjectKey;

}

@property (nonatomic,readonly) TMLMetaContext * metaContext;              //@synthesize metaContext=_metaContext - In the implementation block
@property (assign,nonatomic) JSContext * jsContext;                       //@synthesize jsContext=_jsContext - In the implementation block
@property (assign,nonatomic) JSValue * apiObject;                         //@synthesize apiObject=_apiObject - In the implementation block
@property (nonatomic,copy) NSString * apiObjectKey;                       //@synthesize apiObjectKey=_apiObjectKey - In the implementation block
@property (nonatomic,readonly) TMLMetaObject * rootObject; 
-(TMLMetaObject *)rootObject;
-(JSContext *)jsContext;
-(void)setJsContext:(JSContext *)arg1 ;
-(id)initWithMetaContext:(id)arg1 ;
-(TMLMetaContext *)metaContext;
-(JSValue *)apiObject;
-(void)setApiObject:(JSValue *)arg1 ;
-(NSString *)apiObjectKey;
-(void)setApiObjectKey:(NSString *)arg1 ;
@end

