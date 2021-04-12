/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _CDDataCollectionAnonymizer : NSObject <NSCopying> {

	NSData* _salt;

}

@property (nonatomic,copy,readonly) NSData * salt;              //@synthesize salt=_salt - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)salt;
-(id)initWithSalt:(id)arg1 ;
-(id)anonymizeObject:(id)arg1 ;
-(id)anonymizeString:(id)arg1 withSalt:(id)arg2 ;
-(id)anonymizeArray:(id)arg1 ;
-(id)anonymizeDictionary:(id)arg1 ;
@end

