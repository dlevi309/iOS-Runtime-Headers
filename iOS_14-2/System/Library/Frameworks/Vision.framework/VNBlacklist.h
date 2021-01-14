/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VNBlacklist : NSObject <NSCopying> {

	NSSet* _identifiers;

}

@property (readonly) unsigned long long identifierCount; 
@property (copy,readonly) NSSet * allIdentifiers; 
+(id)blacklistFromUTF8StringArray:(const char**)arg1 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(NSSet *)allIdentifiers;
-(unsigned long long)identifierCount;
-(unsigned long long)hash;
-(BOOL)containsIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

