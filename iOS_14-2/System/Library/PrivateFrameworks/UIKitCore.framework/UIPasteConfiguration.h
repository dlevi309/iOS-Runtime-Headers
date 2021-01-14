/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSArray;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSMutableOrderedSet* _acceptableTypes;

}

@property (nonatomic,copy) NSArray * acceptableTypes; 
@property (nonatomic,copy) NSArray * acceptableTypeIdentifiers; 
+(BOOL)supportsSecureCoding;
+(id)_pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationWithAcceptableTypes:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)acceptableTypeIdentifiers;
-(NSArray *)acceptableTypes;
-(void)setAcceptableTypes:(NSArray *)arg1 ;
-(id)initWithAcceptableTypes:(id)arg1 ;
-(void)addTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(void)setAcceptableTypeIdentifiers:(NSArray *)arg1 ;
-(id)initWithAcceptableTypeIdentifiers:(id)arg1 ;
-(void)addAcceptableTypeIdentifiers:(id)arg1 ;
-(id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

