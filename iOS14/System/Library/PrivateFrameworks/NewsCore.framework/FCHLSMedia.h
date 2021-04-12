/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSURL;

@interface FCHLSMedia : NSObject {

	NSString* _type;
	NSURL* _url;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(NSURL *)url;
-(NSString *)name;
-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
-(NSString *)type;
@end

