/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CUINamedData, NSString, NSData;

@interface NSDataAsset : NSObject <NSCopying> {

	CUINamedData* _namedData;

}

@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * typeIdentifier; 
+(id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2 ;
+(id)_namedDataPrivateAccessorWithName:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithName:(id)arg1 ;
-(NSString *)typeIdentifier;
-(id)initWithName:(id)arg1 bundle:(id)arg2 ;
@end

