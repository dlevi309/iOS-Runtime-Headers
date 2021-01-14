/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFObjectPropertyMapper.h>

@class NSDictionary, NSArray, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper> {

	NSDictionary* _children;
	NSArray* _attributes;

}

@property (nonatomic,readonly) NSArray * attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * children;                 //@synthesize children=_children - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)children;
-(id)initWithAttributes:(id)arg1 ;
-(NSArray *)attributes;
-(id)initWithChildren:(id)arg1 ;
-(id)initWithChildren:(id)arg1 attributes:(id)arg2 ;
-(id)childForKey:(id)arg1 ;
-(void)setChildren:(NSDictionary *)arg1 ;
@end

