/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSDataObservable.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDataItem.h>
@class NSString;


@protocol IKJSDataItem <JSExport>
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * identifier; 
@required
+(id)makeDataItem:(id)arg1 :(id)arg2;
-(NSString *)type;
-(NSString *)identifier;

@end

#import <libobjc.A.dylib/_IKJSDataItemProxy.h>
#import <libobjc.A.dylib/_IKJSDataItem.h>

@class NSString, NSDictionary;

@interface IKJSDataItem : IKJSDataObservable <NSObject, IKJSDataItem, _IKJSDataItemProxy, _IKJSDataItem> {

	NSString* _type;
	NSString* _identifier;
	NSString* _prototypeIdentifier;

}

@property (nonatomic,readonly) NSDictionary * dataDictionary; 
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * prototypeIdentifier;                 //@synthesize prototypeIdentifier=_prototypeIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
+(id)makeDataItem:(id)arg1 :(id)arg2 ;
-(id)initWithType:(id)arg1 ;
-(id)init;
-(id)initWithValue:(id)arg1 ;
-(NSString *)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(NSDictionary *)dataDictionary;
-(NSString *)prototypeIdentifier;
-(id)asPrivateIKJSDataItem;
-(void)setPrototypeIdentifier:(NSString *)arg1 ;
@end

