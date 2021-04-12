/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)acceptableTypeIdentifiers;
-(void)addTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(id)initWithAcceptableTypes:(id)arg1 ;
-(id)initWithAcceptableTypeIdentifiers:(id)arg1 ;
-(void)setAcceptableTypeIdentifiers:(NSArray *)arg1 ;
-(void)addAcceptableTypeIdentifiers:(id)arg1 ;
-(id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(void)setAcceptableTypes:(NSArray *)arg1 ;
-(NSArray *)acceptableTypes;
@end

