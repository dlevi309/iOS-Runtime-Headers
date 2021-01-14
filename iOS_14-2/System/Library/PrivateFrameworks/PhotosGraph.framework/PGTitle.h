/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSString;

@interface PGTitle : NSObject {

	NSString* _stringValue;
	long long _category;

}

@property (nonatomic,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long category;                  //@synthesize category=_category - In the implementation block
+(id)titleWithString:(id)arg1 category:(long long)arg2 ;
-(long long)category;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

