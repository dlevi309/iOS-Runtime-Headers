/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSString, NSURL;

@interface BLHLSMedia : NSObject {

	NSString* _type;
	NSURL* _url;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(NSString *)type;
-(NSURL *)url;
-(void)setPropertiesFromAttributeList:(id)arg1 ;
@end

