/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSDictionary *)headerFields;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end

