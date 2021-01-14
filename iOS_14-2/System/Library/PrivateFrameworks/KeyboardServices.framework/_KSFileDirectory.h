/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
*/

#import <KeyboardServices/KeyboardServices-Structs.h>
#import <KeyboardServices/_KSFileEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSArray;

@interface _KSFileDirectory : _KSFileEntry <NSSecureCoding, NSFastEnumeration> {

	NSMutableDictionary* _contents;

}

@property (nonatomic,retain,readonly) NSArray * contents; 
+(BOOL)supportsSecureCoding;
-(NSArray *)contents;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_KS0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)consistencyCheck;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)entryForName:(id)arg1 ;
-(void)restoreToPath:(id)arg1 ;
-(void)performOnEverything:(/*^block*/id)arg1 ;
-(id)initWithDirectory:(id)arg1 captureContents:(BOOL)arg2 storeRoot:(BOOL)arg3 ;
-(id)findEntryWithComparison:(/*^block*/id)arg1 recursively:(BOOL)arg2 ;
-(void)removeEntryWithName:(id)arg1 ;
@end

