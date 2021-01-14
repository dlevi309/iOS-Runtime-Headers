/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@class NSString;

@interface ECRawMessageHeader : NSObject {

	NSString* _name;
	NSString* _transmittedName;
	NSString* _body;

}

@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * transmittedName;              //@synthesize transmittedName=_transmittedName - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                         //@synthesize body=_body - In the implementation block
-(NSString *)body;
-(NSString *)name;
-(id)description;
-(NSString *)transmittedName;
-(id)initWithHeaderFieldName:(id)arg1 body:(id)arg2 ;
@end

