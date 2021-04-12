/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSFakeXMLHTTPRequest.h>
@class NSDictionary, NSString, IKJSXMLDocument;


@protocol SKUIJSFakeXMLHTTPRequest <JSExport>
@property (readonly) NSDictionary * metrics; 
@property (readonly) unsigned readyState; 
@property (readonly) id response; 
@property (readonly) NSString * responseText; 
@property (readonly) unsigned responseType; 
@property (readonly) IKJSXMLDocument * responseXML; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
@required
-(NSDictionary *)metrics;
-(NSString *)statusText;
-(id)response;
-(unsigned)readyState;
-(unsigned)responseType;
-(unsigned)status;
-(IKJSXMLDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1;
-(NSString *)responseText;

@end


@class NSDictionary, NSString, IKJSXMLDocument, NSData, NSHTTPURLResponse;

@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest> {

	NSData* _data;
	NSDictionary* _performanceMetrics;
	NSHTTPURLResponse* _response;

}

@property (readonly) NSDictionary * metrics; 
@property (readonly) unsigned readyState; 
@property (readonly) id response; 
@property (readonly) NSString * responseText; 
@property (readonly) unsigned responseType; 
@property (readonly) IKJSXMLDocument * responseXML; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
-(NSDictionary *)metrics;
-(NSString *)statusText;
-(id)response;
-(unsigned)readyState;
-(unsigned)responseType;
-(unsigned)status;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4 ;
-(IKJSXMLDocument *)responseXML;
-(id)getAllResponseHeaders;
-(id)getResponseHeader:(id)arg1 ;
-(NSString *)responseText;
@end

