/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSSDataContainerDataDestructionItem : NSObject <NSCopying> {

	unsigned long long _containerClass;
	const char* _identifier;

}

@property (assign,nonatomic) unsigned long long containerClass;              //@synthesize containerClass=_containerClass - In the implementation block
@property (assign,nonatomic) const char* identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const char*)identifier;
-(void)setIdentifier:(const char*)arg1 ;
-(id)initWithContainerClass:(unsigned long long)arg1 identifier:(const char*)arg2 ;
-(unsigned long long)containerClass;
-(void)setContainerClass:(unsigned long long)arg1 ;
@end

