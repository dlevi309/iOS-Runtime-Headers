/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IKAppPrototypeIdentifier : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _selector;
	NSDictionary* _groupingValues;

}

@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * selector;                        //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * groupingValues;              //@synthesize groupingValues=_groupingValues - In the implementation block
-(NSString *)selector;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)groupingValues;
-(id)initWithIdentifier:(id)arg1 selector:(id)arg2 groupingValues:(id)arg3 ;
@end

