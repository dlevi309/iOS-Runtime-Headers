/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@class NSString, NSDictionary, NSData;

@interface ACFHTTPMethod : NSObject {

	NSString* _name;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (retain) NSData * body;                            //@synthesize body=_body - In the implementation block
+(id)method;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 bodyPropertyList:(id)arg3 error:(id*)arg4 ;
+(id)methodWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)headerFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end

