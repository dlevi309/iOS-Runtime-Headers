/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSSet *)keysOnly;
-(void)setKeysOnly:(NSSet *)arg1 ;
-(NSDictionary *)fullMap;
-(void)setFullMap:(NSDictionary *)arg1 ;
@end

