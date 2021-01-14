/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <libobjc.A.dylib/NSTextLocationPrivate.h>

@class NSString;

@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate> {

	unsigned long long _characterIndex;

}

@property (readonly) unsigned long long characterIndex;                      //@synthesize characterIndex=_characterIndex - In the implementation block
@property (getter=isEndOfDocument,readonly) BOOL endOfDocument; 
@property (copy,readonly) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endOfDocumentLocation;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqualToTextLocation:(id)arg1 ;
-(BOOL)isEndOfDocument;
-(id)shortDescription;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(unsigned long long)characterIndex;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

