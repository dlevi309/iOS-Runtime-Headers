/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSSet, NSDictionary;

@interface EDAMLazyMap : FATObject {

	NSSet* _keysOnly;
	NSDictionary* _fullMap;

}

@property (nonatomic,retain) NSSet * keysOnly;                    //@synthesize keysOnly=_keysOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * fullMap;              //@synthesize fullMap=_fullMap - In the implementation block
+(id)structName;
+(id)structFields;
-(NSDictionary *)fullMap;
-(NSSet *)keysOnly;
-(void)setKeysOnly:(NSSet *)arg1 ;
-(void)setFullMap:(NSDictionary *)arg1 ;
@end

