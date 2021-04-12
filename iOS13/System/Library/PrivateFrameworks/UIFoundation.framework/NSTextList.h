/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSTextList : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	NSString* _markerFormat;
	unsigned long long _listFlags;
	long long _startIndex;
	void* _listSecondary;

}

@property (copy,readonly) NSString * markerFormat; 
@property (readonly) unsigned long long listOptions; 
@property (assign) long long startingItemNumber; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_standardMarkerAttributesForAttributes:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)listOptions;
-(id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setStartingItemNumber:(long long)arg1 ;
-(NSString *)markerFormat;
-(long long)startingItemNumber;
-(id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(BOOL*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7 ;
-(id)markerForItemNumber:(long long)arg1 ;
-(id)_unaffixedMarkerForItemNumber:(long long)arg1 ;
-(id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2 ;
-(BOOL)_isOrdered;
-(id)_markerTitle;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)_markerSuffix;
@end

