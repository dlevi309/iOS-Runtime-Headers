/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSStoreMapNode.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding, NSSecureCoding> {

	id* _attributes;
	id _attributesAsEncoded;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithValues:(id*)arg1 objectID:(id)arg2 ;
-(const id*)attributeValues;
-(void)dealloc;
@end

