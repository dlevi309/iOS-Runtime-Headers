/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFObjectPropertyMapper.h>

@class NSDictionary, NSArray, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper> {

	NSDictionary* _children;
	NSArray* _attributes;

}

@property (nonatomic,readonly) NSArray * attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * children;                 //@synthesize children=_children - In the implementation block
-(NSArray *)attributes;
-(NSDictionary *)children;
-(void)setChildren:(NSDictionary *)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(id)initWithChildren:(id)arg1 ;
-(id)initWithChildren:(id)arg1 attributes:(id)arg2 ;
-(id)childForKey:(id)arg1 ;
@end

