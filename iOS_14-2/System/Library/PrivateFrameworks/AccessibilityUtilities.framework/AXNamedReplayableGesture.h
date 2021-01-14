/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXMutableReplayableGesture.h>

@class NSString;

@interface AXNamedReplayableGesture : AXMutableReplayableGesture {

	BOOL _hasLocalizableName;
	BOOL _shouldPerformAtOriginalLocation;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasLocalizableName;                           //@synthesize hasLocalizableName=_hasLocalizableName - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformAtOriginalLocation;              //@synthesize shouldPerformAtOriginalLocation=_shouldPerformAtOriginalLocation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)gestureWithLegacyFormatDictionary:(id)arg1 ;
+(id)gestureWithPoints:(id)arg1 times:(id)arg2 forces:(id)arg3 ;
+(id)_fingerIdentifierForFingerAtIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasLocalizableName;
-(void)setHasLocalizableName:(BOOL)arg1 ;
-(BOOL)shouldPerformAtOriginalLocation;
-(void)setShouldPerformAtOriginalLocation:(BOOL)arg1 ;
-(id)gestureShiftedByOffset:(CGPoint)arg1 ;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

