/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allIdentifiers;
-(id)initWithIdentifiers:(id)arg1 ;
-(unsigned long long)identifierCount;
-(BOOL)containsIdentifier:(id)arg1 ;
@end

