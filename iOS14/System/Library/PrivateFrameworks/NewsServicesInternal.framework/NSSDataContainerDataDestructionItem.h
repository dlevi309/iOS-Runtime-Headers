/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)containerClass;
-(void)setContainerClass:(unsigned long long)arg1 ;
-(void)setIdentifier:(const char*)arg1 ;
-(const char*)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContainerClass:(unsigned long long)arg1 identifier:(const char*)arg2 ;
@end

