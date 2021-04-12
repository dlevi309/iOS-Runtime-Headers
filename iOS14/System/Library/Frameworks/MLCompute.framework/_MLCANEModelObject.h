/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/


@class _ANEClient, _ANEModel, _ANERequest, NSDictionary;

@interface _MLCANEModelObject : NSObject {

	unsigned _qos;
	_ANEClient* _connection;
	_ANEModel* _model;
	_ANERequest* _request;
	NSDictionary* _ANEFOptions;
	NSDictionary* _graphPlist;

}

@property (nonatomic,readonly) _ANEClient * connection;                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) _ANEModel * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) _ANERequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSDictionary * ANEFOptions;              //@synthesize ANEFOptions=_ANEFOptions - In the implementation block
@property (nonatomic,readonly) unsigned qos;                            //@synthesize qos=_qos - In the implementation block
@property (nonatomic,readonly) NSDictionary * graphPlist;               //@synthesize graphPlist=_graphPlist - In the implementation block
+(id)objectWithModel:(id)arg1 connection:(id)arg2 request:(id)arg3 options:(id)arg4 qos:(unsigned)arg5 graphPlist:(id)arg6 ;
-(unsigned)qos;
-(_ANEModel *)model;
-(void)setRequest:(_ANERequest *)arg1 ;
-(_ANERequest *)request;
-(_ANEClient *)connection;
-(void)dealloc;
-(id)initWithModel:(id)arg1 connection:(id)arg2 request:(id)arg3 options:(id)arg4 qos:(unsigned)arg5 graphPlist:(id)arg6 ;
-(NSDictionary *)ANEFOptions;
-(NSDictionary *)graphPlist;
@end

