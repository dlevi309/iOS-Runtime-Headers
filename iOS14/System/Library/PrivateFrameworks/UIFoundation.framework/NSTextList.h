/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)markerFormat;
-(unsigned long long)listOptions;
-(id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setStartingItemNumber:(long long)arg1 ;
-(long long)startingItemNumber;
-(id)markerForItemNumber:(long long)arg1 ;
-(id)_unaffixedMarkerForItemNumber:(long long)arg1 ;
-(id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(BOOL*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7 ;
-(id)_markerTitle;
-(id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2 ;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)_markerSuffix;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isOrdered;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

