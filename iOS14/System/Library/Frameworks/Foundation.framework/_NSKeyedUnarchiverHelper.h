/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSArray, NSMutableArray, NSError;

@interface _NSKeyedUnarchiverHelper : NSObject {

	NSArray* _white;
	unsigned _lastRef;
	NSMutableArray* _allowedClasses;
	NSError* _decodeError;
	BOOL expectsUnnestedCollection;
	BOOL decodedCollection;

}

@property (copy) NSError * decodeError;              //@synthesize decodeError=_decodeError - In the implementation block
-(id)init;
-(NSError *)decodeError;
-(void)setAllowedClassNames:(id)arg1 ;
-(void)setDecodeError:(NSError *)arg1 ;
-(id)allowedClassNames;
-(BOOL)classNameAllowed:(Class)arg1 ;
-(void)dealloc;
@end

